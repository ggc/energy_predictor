db.getCollection('preds').find({
    
    $and: [
        {"prediction_made": 
            {$gte: new ISODate("2017-03-01")}
        },
        {"prediction_made": 
            {$lt: new ISODate("2017-04-01")}
        }
    ]
            
})