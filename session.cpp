/*
 * session.cpp
 * 
 * Copyright 2017 Lucas <lucas@linux-n51u>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include "session.h"


Session::Session(DataController & _dataController) : dataController(_dataController)
{
	
}


Session::~Session()
{
	
}

Session::start(){
	
	while (continu){

		Section section(dataController);
		
		std::vector <ConnectionToQuestionStrategie> connectionsToQuestionStrategies;
		for (auto questionStrategieId : dataController.questionStrategieIDs()){

			connectionsToQuestionStrategies.push_back(ConnectionToQuestionStrategie(questionStrategieId,1.0/questionStrategieIDs.sizeOf()));

		}

		connectionsToQuestionStrategies

		section.addStartInformationForQuestionStrategis(connectionsToQuestionStrategies);

		section.run()
		//actuallSurvey=Survey(dataController);
		//actuallSurvey.start();
		
	}
}



