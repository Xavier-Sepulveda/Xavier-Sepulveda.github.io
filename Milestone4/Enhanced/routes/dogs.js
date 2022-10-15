// express used to create the RESTful API services to maintain the server
const express = require("express");

// Used to configure the router
const router = express.Router();

// Tells program its going to use the Dogs.js in the model folder
const Dogs = require("../model/Dogs");

//get all the dogs
router.get("/", async (req,res) => {
    try {
        // find() -> get all the data
        const dogs = await Dogs.find();
        res.json(dogs);
    } catch (err){
        res.json({message : err});
    }
});

//save a dog
router.post("/", async (req, res) =>{
    const dogs = new dogs({
        name : req.body.name,
        description : req.body.description,
    });

    try{
       const saveddogs = await dogs.save();
       res.json(saveddogs);
    } catch (err) {
        res.json({message : err});
    }
});

//get a specific dogs
router.get("/:dogsId", async (req, res) =>{
    try {
        // find() -> get all the data
        const dogs = await dogs.findById(req.params.dogsId);
        res.json(dogs);
    } catch (err){
        res.json({message : err});
    }
});

//update the specific dogs
router.patch("/:dogsId", async (req, res) => {
    try {
        const updateddogs = await dogs.updateOne(
            {_id: req.params.dogsId },
            {
                $set : {
                    name : req.body.name,
                    description : req.body.description,
                },
            }
        );

        res.json(updateddogs);
    } catch (err) {
        res.json({message : err});
    }
});

// delete a dogs
router.delete("/:dogsId", async (req, res) => {
    try {
        const removedogs = await dogs.remove({ _id : req.params.dogsId});
        res.json(removedogs);
    } catch (err) {
        res.json({message : err});
    }
});


// Exports the router
module.exports = router;
