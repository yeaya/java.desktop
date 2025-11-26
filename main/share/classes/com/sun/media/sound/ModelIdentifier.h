#ifndef _com_sun_media_sound_ModelIdentifier_h_
#define _com_sun_media_sound_ModelIdentifier_h_
//$ class com.sun.media.sound.ModelIdentifier
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelIdentifier : public ::java::lang::Object {
	$class(ModelIdentifier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModelIdentifier();
	void init$($String* object);
	void init$($String* object, int32_t instance);
	void init$($String* object, $String* variable);
	void init$($String* object, $String* variable, int32_t instance);
	virtual bool equals(Object$* obj) override;
	int32_t getInstance();
	$String* getObject();
	$String* getVariable();
	virtual int32_t hashCode() override;
	void setInstance(int32_t instance);
	void setObject($String* object);
	void setVariable($String* variable);
	virtual $String* toString() override;
	$String* object = nullptr;
	$String* variable = nullptr;
	int32_t instance = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelIdentifier_h_