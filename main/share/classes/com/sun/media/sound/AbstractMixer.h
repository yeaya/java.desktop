#ifndef _com_sun_media_sound_AbstractMixer_h_
#define _com_sun_media_sound_AbstractMixer_h_
//$ class com.sun.media.sound.AbstractMixer
//$ extends com.sun.media.sound.AbstractLine
//$ implements javax.sound.sampled.Mixer

#include <com/sun/media/sound/AbstractLine.h>
#include <java/lang/Array.h>
#include <javax/sound/sampled/Mixer.h>

#pragma push_macro("ALAW")
#undef ALAW
#pragma push_macro("PCM")
#undef PCM
#pragma push_macro("ULAW")
#undef ULAW

namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class Control;
			class Line;
			class Line$Info;
			class Mixer$Info;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AbstractMixer : public ::com::sun::media::sound::AbstractLine, public ::javax::sound::sampled::Mixer {
	$class(AbstractMixer, $NO_CLASS_INIT, ::com::sun::media::sound::AbstractLine, ::javax::sound::sampled::Mixer)
public:
	AbstractMixer();
	virtual void addLineListener(::javax::sound::sampled::LineListener* listener) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::javax::sound::sampled::Control* getControl(::javax::sound::sampled::Control$Type* controlType) override;
	virtual $Array<::javax::sound::sampled::Control>* getControls() override;
	virtual ::javax::sound::sampled::Line* getLine(::javax::sound::sampled::Line$Info* info) override {return nullptr;}
	virtual ::javax::sound::sampled::Line$Info* getLineInfo() override;
	virtual int32_t getMaxLines(::javax::sound::sampled::Line$Info* info) override {return 0;}
	virtual int32_t hashCode() override;
	void init$(::javax::sound::sampled::Mixer$Info* mixerInfo, $Array<::javax::sound::sampled::Control>* controls, $Array<::javax::sound::sampled::Line$Info>* sourceLineInfo, $Array<::javax::sound::sampled::Line$Info>* targetLineInfo);
	void close(::javax::sound::sampled::Line* line);
	virtual void close() override;
	::javax::sound::sampled::Line$Info* getLineInfo(::javax::sound::sampled::Line$Info* info);
	virtual ::javax::sound::sampled::Mixer$Info* getMixerInfo() override;
	virtual $Array<::javax::sound::sampled::Line$Info>* getSourceLineInfo() override;
	virtual $Array<::javax::sound::sampled::Line$Info>* getSourceLineInfo(::javax::sound::sampled::Line$Info* info) override;
	virtual $Array<::javax::sound::sampled::Line>* getSourceLines() override;
	virtual $Array<::javax::sound::sampled::Line$Info>* getTargetLineInfo() override;
	virtual $Array<::javax::sound::sampled::Line$Info>* getTargetLineInfo(::javax::sound::sampled::Line$Info* info) override;
	virtual $Array<::javax::sound::sampled::Line>* getTargetLines() override;
	virtual void implClose() {}
	virtual void implOpen() {}
	virtual void implStart() {}
	virtual void implStop() {}
	virtual bool isControlSupported(::javax::sound::sampled::Control$Type* controlType) override;
	virtual bool isLineSupported(::javax::sound::sampled::Line$Info* info) override;
	virtual bool isOpen() override;
	bool isSourceLine(::javax::sound::sampled::Line$Info* info);
	virtual bool isSynchronizationSupported($Array<::javax::sound::sampled::Line>* lines, bool maintainSync) override;
	bool isTargetLine(::javax::sound::sampled::Line$Info* info);
	virtual void open() override;
	void open(bool manual);
	void open(::javax::sound::sampled::Line* line);
	virtual void removeLineListener(::javax::sound::sampled::LineListener* listener) override;
	void start(::javax::sound::sampled::Line* line);
	void stop(::javax::sound::sampled::Line* line);
	virtual void synchronize($Array<::javax::sound::sampled::Line>* lines, bool maintainSync) override;
	virtual $String* toString() override;
	virtual void unsynchronize($Array<::javax::sound::sampled::Line>* lines) override;
	static const int32_t PCM = 0;
	static const int32_t ULAW = 1;
	static const int32_t ALAW = 2;
	::javax::sound::sampled::Mixer$Info* mixerInfo = nullptr;
	$Array<::javax::sound::sampled::Line$Info>* sourceLineInfo = nullptr;
	$Array<::javax::sound::sampled::Line$Info>* targetLineInfo = nullptr;
	bool started = false;
	bool manuallyOpened = false;
	::java::util::Vector* sourceLines = nullptr;
	::java::util::Vector* targetLines = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("ALAW")
#pragma pop_macro("PCM")
#pragma pop_macro("ULAW")

#endif // _com_sun_media_sound_AbstractMixer_h_