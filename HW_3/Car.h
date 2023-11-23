class Car {
    private:
    int engineGrade;       // engineGrade 라는 이름의 private 변수 생성
    protected:
    float price;
    void speedUP(float);
    void speedDown(float);
    int airbag;             // airbag 이라는 이름의 protected 변수 생성
    public:
    void setPrice(float);
    float getPrice();
    float speed;
    void speedChange(float);
    int wheels;
    void setWheels(int);
    int getWheels();
    void klaxon(int);
    int seats;          // seats라는 이름의 public 변수 생성
};