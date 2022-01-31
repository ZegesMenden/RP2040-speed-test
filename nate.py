class test_class:

    def __init__(self) -> None:
    #   ^^    ^^
    # this is a predefined init function within python
    # that is ran when the objest is initialized    
        
        
        # we have self as an argument so that the class "passes itsself" in as a variable
        # this makes it so that we can access any data that is initialized with self.<variable name>
        
        self.variable = 1.0
        
        # we just greated a number that can be accessed by any function in this clas that has self as an argument
        
    def get_variable(self):
        # see how we pass in self
        
        return self.variable
        # we were able to access self.variable because we passed in self
        