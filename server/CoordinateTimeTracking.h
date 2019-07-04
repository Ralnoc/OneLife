#include "minorGems/system/Time.h"
#include "minorGems/util/SimpleVector.h"



// for testing
typedef struct CoordinateXYRecord {
        int x, y;
        timeSec_t t;
    } CoordinateXYRecord;



class CoordinateTimeTracking {
    public:

        // returns true if exists, or false if not (and new record created if
        // not).  If exists, time of record will be updated to inCurTime
        char checkExists( int inX, int inY, timeSec_t inCurTime );

        // any records with times equal to or older than inStaleTime will be
        // cleared
        void cleanStale( timeSec_t inStaleTime );


    private:

        SimpleVector<CoordinateXYRecord> mRecords;
    };

    
