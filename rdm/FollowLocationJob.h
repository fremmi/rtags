#ifndef FollowLocationJob_h
#define FollowLocationJob_h

#include <QObject>
#include <ByteArray.h>
#include <QList>
#include "RTags.h"
#include "Job.h"
#include "Location.h"

class FollowLocationJob : public Job
{
    Q_OBJECT
public:
    FollowLocationJob(int id, const Location &loc, unsigned flags);
    ~FollowLocationJob();
protected:
    virtual void execute();
private:
    const Location location;
    const unsigned flags;
};

#endif
