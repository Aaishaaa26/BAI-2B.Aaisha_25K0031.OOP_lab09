#include <iostream>
using namespace std;

class Activity{
	public:
		virtual void calculateCaloriesBurned() = 0;
		virtual ~Activity(){}
};

class Running : public Activity{
	double distance, time;
	public:
		Running(double d, double t) : distance(d), time(t) {}
		
		void calculateCaloriesBurned(){
			cout << "\n_____Calories Burned By Running_____"<< endl << distance*60 << " calories burned in " << time << " minute(s)" << endl;
		}
};
class Cycling : public Activity{
	double speed, time;
	public:
		Cycling(double s, double t) : speed(s), time(t) {}
		
		void calculateCaloriesBurned(){
			cout << "\n_____Calories Burned By Cycling_____"<< endl << speed*time*60 << " calories burned in " << time << " hr(s)" << endl;
		}
};

int main(){
	Activity* a1 = new Running(5, 60);
	Activity* a2 = new Cycling(3, 2.5);
	
	a1->calculateCaloriesBurned();
	a2->calculateCaloriesBurned();
	
	delete a1;
	delete a2;
}
