#ifndef _com_sun_media_sound_AbstractLine_h_
#define _com_sun_media_sound_AbstractLine_h_
//$ class com.sun.media.sound.AbstractLine
//$ extends javax.sound.sampled.Line

#include <java/lang/Array.h>
#include <javax/sound/sampled/Line.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AbstractMixer;
				class EventDispatcher;
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Vector;
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class Control;
			class Control$Type;
			class Line$Info;
			class LineEvent;
			class LineListener;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AbstractLine : public ::javax::sound::sampled::Line {
	$class(AbstractLine, 0, ::javax::sound::sampled::Line)
public:
	AbstractLine();
	virtual void close() override {}
	void init$(::javax::sound::sampled::Line$Info* info, ::com::sun::media::sound::AbstractMixer* mixer, $Array<::javax::sound::sampled::Control>* controls);
	virtual void addLineListener(::javax::sound::sampled::LineListener* listener) override;
	virtual ::javax::sound::sampled::Control* getControl(::javax::sound::sampled::Control$Type* controlType) override;
	virtual $Array<::javax::sound::sampled::Control>* getControls() override;
	::com::sun::media::sound::EventDispatcher* getEventDispatcher();
	int32_t getFramePosition();
	virtual ::javax::sound::sampled::Line$Info* getLineInfo() override;
	virtual int64_t getLongFramePosition();
	::com::sun::media::sound::AbstractMixer* getMixer();
	virtual bool isControlSupported(::javax::sound::sampled::Control$Type* controlType) override;
	virtual bool isOpen() override;
	virtual void open() override {}
	virtual void removeLineListener(::javax::sound::sampled::LineListener* listener) override;
	void sendEvents(::javax::sound::sampled::LineEvent* event);
	void setOpen(bool open);
	::javax::sound::sampled::Line$Info* info = nullptr;
	$Array<::javax::sound::sampled::Control>* controls = nullptr;
	::com::sun::media::sound::AbstractMixer* mixer = nullptr;
	$volatile(bool) open$ = false;
	::java::util::Vector* listeners = nullptr;
	static ::java::util::Map* dispatchers;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AbstractLine_h_