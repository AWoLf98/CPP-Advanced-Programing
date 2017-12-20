#include <iostream> 
#include <deque>

using namespace std;

enum CommandType { MoveLeft, MoveRight, MoveForward, MoveBackward };

ostream& operator<< (ostream &strm, CommandType command) {
	switch (int(command))
	{
	case MoveLeft: strm << "left"; break;
	case MoveRight: strm << "right"; break;
	case MoveForward: strm << "forward"; break;
	case MoveBackward: strm << "backward"; break;
	default: strm << "Unknown Commmand"; break;
	}

	return strm;
}

class RoboCommander
{
private:
	deque<CommandType> commands;
public:
	void AddCommand(CommandType commandType);
	void UndoCommand();
	void Execute();

};

void RoboCommander::AddCommand(CommandType commandType)
{
	this->commands.push_back(commandType);
}

void RoboCommander::Execute()
{
	for (CommandType i : this->commands)
		cout << "Moving " << i << endl;
	cout << "Ready" << endl;
}

void RoboCommander::UndoCommand()
{
	if (commands.size() != 0)
		commands.pop_back();
}

int main() {
	RoboCommander commander;

	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveRight);
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveForward);
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveForward);
	commander.AddCommand(MoveRight);
	commander.AddCommand(MoveBackward);
	commander.Execute();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.AddCommand(MoveForward);
	commander.Execute();
	