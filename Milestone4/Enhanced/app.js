//Configures the express app to use the express package
const express = require("express");

//  Creates the app
const app = express();

// Mongoose package used to configure and connect MongoDB with the project
const mongoose = require("mongoose");

// Uses the config from the dotenv package to access the environment variable stored in the .env file 
require("dotenv/config");

// Tells app to use the bodyParser package, and allows anything passed through the body tag to be passed
const bodyParser = require("body-parser");

//Middle ware - Used to run other functions while program is sending requests/responses

app.use(bodyParser.json());

//Import the Routes
const dogsRoute = require("./routes/dogs");

// Uses the dog file when routes are used
app.use("/dogs", DogsRoute);

//ROUTES
//GET() -> Fetch the data, POST() to push data to DB, PATCH() to update, DELETE() to delete the data

// When request is sent to home route ("/") request and response parameters are passed
app.get("/", (req,res) => {
    res.send("Im inside the home");
});

// When request is sent to dogs ("/dogs") request and response parameters are passed
app.get("/dogs", (req,res) => {
    res.send("im inside the dogs");
});


//connect the MongoDB
mongoose.connect(process.env.DB_CONNECTION, () =>{
    console.log("connected to the new database");
});


// Creates listening port to listen to the server
app.listen(3000);
