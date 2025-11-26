#ifndef _com_sun_media_sound_ModelPerformer_h_
#define _com_sun_media_sound_ModelPerformer_h_
//$ class com.sun.media.sound.ModelPerformer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelPerformer : public ::java::lang::Object {
	$class(ModelPerformer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModelPerformer();
	void init$();
	::java::util::List* getConnectionBlocks();
	int32_t getExclusiveClass();
	int32_t getKeyFrom();
	int32_t getKeyTo();
	$String* getName();
	::java::util::List* getOscillators();
	$Object* getUserObject();
	int32_t getVelFrom();
	int32_t getVelTo();
	bool isDefaultConnectionsEnabled();
	bool isReleaseTriggered();
	bool isSelfNonExclusive();
	void setConnectionBlocks(::java::util::List* connectionBlocks);
	void setDefaultConnectionsEnabled(bool addDefaultConnections);
	void setExclusiveClass(int32_t exclusiveClass);
	void setKeyFrom(int32_t keyFrom);
	void setKeyTo(int32_t keyTo);
	void setName($String* name);
	void setReleaseTriggered(bool value);
	void setSelfNonExclusive(bool selfNonExclusive);
	void setUserObject(Object$* object);
	void setVelFrom(int32_t velFrom);
	void setVelTo(int32_t velTo);
	::java::util::List* oscillators = nullptr;
	::java::util::List* connectionBlocks = nullptr;
	int32_t keyFrom = 0;
	int32_t keyTo = 0;
	int32_t velFrom = 0;
	int32_t velTo = 0;
	int32_t exclusiveClass = 0;
	bool releaseTrigger = false;
	bool selfNonExclusive = false;
	$Object* userObject = nullptr;
	bool addDefaultConnections = false;
	$String* name = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelPerformer_h_