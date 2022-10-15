// Mongoose package used to configure and connect MongoDB with the project
const mongoose = require("mongoose");

//Schema used to post the dog data
const DogsSchema = mongoose.Schema({
    name : {
        type : String,
        required: true,
    },
    description: {
        type : String,
        required: true,
    },
    date : {
        type : String,
        default : Date.now,
    },
});

//Exports the DogSchema
module.exports = mongoose.model("Dogs", DogsSchema);