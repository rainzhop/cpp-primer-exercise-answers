class Date
{
public:
    Date(unsigned y = 1900, unsigned m = 1, unsigned d = 1):
        year(y), m(month), d(day) {  };
private:
    unsigned year;
    unsigned month;
    unsigned day;
};
