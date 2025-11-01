#ifndef _com_sun_media_sound_PortMixer$PortMixerPort_h_
#define _com_sun_media_sound_PortMixer$PortMixerPort_h_
//$ class com.sun.media.sound.PortMixer$PortMixerPort
//$ extends com.sun.media.sound.AbstractLine
//$ implements javax.sound.sampled.Port

#include <com/sun/media/sound/AbstractLine.h>
#include <java/lang/Array.h>
#include <javax/sound/sampled/Port.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class PortMixer;
			}
		}
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class Control;
			class Port$Info;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class PortMixer$PortMixerPort : public ::com::sun::media::sound::AbstractLine, public ::javax::sound::sampled::Port {
	$class(PortMixer$PortMixerPort, $NO_CLASS_INIT, ::com::sun::media::sound::AbstractLine, ::javax::sound::sampled::Port)
public:
	PortMixer$PortMixerPort();
	virtual void addLineListener(::javax::sound::sampled::LineListener* listener) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::javax::sound::sampled::Control* getControl(::javax::sound::sampled::Control$Type* controlType) override;
	virtual $Array<::javax::sound::sampled::Control>* getControls() override;
	virtual ::javax::sound::sampled::Line$Info* getLineInfo() override;
	virtual int32_t hashCode() override;
	void init$(::javax::sound::sampled::Port$Info* info, ::com::sun::media::sound::PortMixer* mixer, int32_t portIndex);
	virtual void close() override;
	void disposeControls();
	void enableControls($Array<::javax::sound::sampled::Control>* controls, bool enable);
	void implClose();
	void implOpen();
	virtual bool isControlSupported(::javax::sound::sampled::Control$Type* controlType) override;
	virtual bool isOpen() override;
	virtual void open() override;
	virtual void removeLineListener(::javax::sound::sampled::LineListener* listener) override;
	virtual $String* toString() override;
	int32_t portIndex = 0;
	int64_t id = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_PortMixer$PortMixerPort_h_