class Rectangle {
    private:
        float _length;
        float _width;
    public:
        //Construtor e destrutor
        Rectangle();
        ~Rectangle();
        
        //Getters
        float get_length();
        float get_width();

        //Setters
        void set_length(float length);
        void set_width(float width);

        //Funções-membro
        float perimeter();
        float area();

};
