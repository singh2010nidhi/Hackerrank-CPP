class Student{
    private:
        int scores[5],i,sum=0;
    public:
        void input()
        {
            for(i=0;i<5;i++)
            {
                cin>>scores[i];
                sum+=scores[i];
            }
        }
        int calculateTotalScore()
        {
               return sum;
        }

};
