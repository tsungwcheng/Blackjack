#ifndef CARDMAPS_H
#define CARDMAPS_H

std::map<std::string, unsigned> BlackjackMap(){

	std::map<std::string, unsigned> value;
	value["ACE"] = 11;
	value["TWO"] = 2;
	value["THREE"] = 3;
	value["FOUR"] = 4;
	value["FIVE"] = 5;
	value["SIX"] = 6;
	value["SEVEN"] = 7;
	value["EIGHT"] = 8;
	value["NINE"] = 9;
	value["TEN"] = 10;
	value["JACK"] = 10;
	value["QUEEN"] = 10;
	value["KING"] = 10;
	//value['ACE'] = 1;
	return value;

}

#endif