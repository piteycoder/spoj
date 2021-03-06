// U_Bajtosia.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct Bajtos {
	char name[12];
	long long nr;
};

void sort(Bajtos &first, Bajtos &second);
Bajtos* setMaxPointers(Bajtos *max, Bajtos *added);
Bajtos* setMinPointers(Bajtos *min, Bajtos *added);
int main()
{
	int cap;
	(cin >> cap).get();
	Bajtos *guest = new Bajtos[cap];

	(cin >> guest[0].name >> guest[0].nr).get();
	(cin >> guest[1].name >> guest[1].nr).get();
	sort(guest[0], guest[1]);
	
	Bajtos *MaxPtr = &guest[1];
	Bajtos *NdMaxPtr = guest;
	Bajtos *MinPtr = guest;
	Bajtos *NdMinPtr = &guest[1];

	for (int i = 2; i < cap; i++) {
		(cin >> guest[i].name >> guest[i].nr).get();
		NdMaxPtr = setMaxPointers(MaxPtr, &guest[i]);
		NdMinPtr = setMinPointers(MinPtr, &guest[i]);
	}
	int changes;
	(cin >> changes).get();
	Bajtos guest1, guest2;
	for (int i = 0; i < changes; i++) {
		cout << MinPtr->name << " " << MaxPtr->name << endl;
		(cin >> guest1.name >> guest1.nr).get();
		(cin >> guest2.name >> guest2.nr).get();
		sort(guest1, guest2);

		MaxPtr = setMaxPointers(MaxPtr, &guest2);
		MinPtr = setMinPointers(MinPtr, &guest1);
	}
	delete[]guest;
    return 0;
}
Bajtos * setMinPointers(Bajtos *min, Bajtos *added) {
	Bajtos *temp = added;
	if (added->nr < min->nr) {
		Bajtos change;
		change = *min;
		*min = *added;
		*added = change;
	}
	return temp;
}
Bajtos * setMaxPointers(Bajtos *max, Bajtos *added) {
	Bajtos *temp = added;
	if (added->nr > max->nr) {
		Bajtos change;
		change = *max;
		*max = *added;
		*added = change;
	}
	return temp;
}
void sort(Bajtos & first, Bajtos & second) {
	Bajtos temp;
	if (first.nr > second.nr) {
		temp = first;
		first = second;
		second = temp;
	}
}
