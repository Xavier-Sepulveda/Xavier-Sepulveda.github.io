from pymongo import MongoClient

from bson.objectid import ObjectId

from bson.json_util import dumps

class AnimalShelter(object):
    """ CRUD operations for Animal collection in MongoDB """

    def __init__(self, ):
        # Initializing the MongoClient. This helps to 
        # access the MongoDB databases and collections. 
        self.client = MongoClient('mongodb://%s:%s@localhost:37077/AAC' % ('aacuser1', '1234'))
        self.database = self.client['AAC']
        print('connected to mongoDB')
	

# Complete this create method to implement the C in CRUD.
    def create(self, data):
        if data is not None:
            self.database.animals.insert(data)  # data should be dictionary
            return True				# prints True on screen data was inserted
        else:
	        raise Exception('Data is empty, nothing has been saved')    
	        return False			# prints false on screen if no data was inserted

# Create method to implement the R in CRUD. 
    def read(self, lookup):
        if lookup is not None:
            result = self.database.animals.find()  # lookup should be dictionary  
            return result
        else:
            error = 'Error, no results found.'
            return error
        
# Create method to implement the U in CRUD. 
    def update(self, data, newData):
        if data is not None:
            updated = self.database.animals.update_many(data,newData)  # data should be dictionary  
            return dumps(self.read(newData))
        else:
            error = 'Error, nothing to update.'
            return error
        
# Create method to implement the D in CRUD. 
    def delete(self, data):
        if data is not None:
            deleted = self.database.animals.delete_many(data)  # data should be dictionary  
            return dumps(self.read(data))
        else:
            error = 'Error, nothing to delete.'
            return error
