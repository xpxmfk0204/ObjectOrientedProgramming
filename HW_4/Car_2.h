class Car {
    public:
    Car() : speed(0.1), wheels(0), price(0.2) {};
    Car(float, int, float);
    void setPrice(float ii) {
        price = ii;
    }
    float getPrice() {
        return price;
    }
    float speed;
    void speedChange(float ii) {
        speed = ii;
    }
    int wheels;
    void setWheels(int ii) {
        wheels = ii;
    }
    int getWheels() {
        return wheels;
    }
    void klaxon(int);

    friend class Engineer;
    private:
    int engineGrade;        // engineGrade 라는 이름의 private 변수 생성
    protected:
    float price;
    void speedUp(float ii) {
        speed += ii;
    }
    void speedDown(float ii) {
        speed -= ii;
    }
};