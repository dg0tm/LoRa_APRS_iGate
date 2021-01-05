#ifndef TASK_LORA_H_
#define TASK_LORA_H_

#include <TaskManager.h>
#include <BoardFinder.h>
#include <LoRa_APRS.h>

class LoraTask : public Task
{
public:
	LoraTask();
	virtual ~LoraTask();

	virtual bool setup(std::shared_ptr<Configuration> config, std::shared_ptr<BoardConfig> boardConfig) override;
	virtual bool loop(std::shared_ptr<Configuration> config) override;

	TaskQueue<std::shared_ptr<APRSMessage>> inputQueue;

private:
	std::shared_ptr<LoRa_APRS> _lora_aprs;
};

#endif
