#ifndef _javax_sound_sampled_Mixer_h_
#define _javax_sound_sampled_Mixer_h_
//$ interface javax.sound.sampled.Mixer
//$ extends javax.sound.sampled.Line

#include <java/lang/Array.h>
#include <javax/sound/sampled/Line.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class Line$Info;
			class Mixer$Info;
		}
	}
}

namespace javax {
	namespace sound {
		namespace sampled {

class $export Mixer : public ::javax::sound::sampled::Line {
	$interface(Mixer, $NO_CLASS_INIT, ::javax::sound::sampled::Line)
public:
	virtual ::javax::sound::sampled::Line* getLine(::javax::sound::sampled::Line$Info* info) {return nullptr;}
	virtual int32_t getMaxLines(::javax::sound::sampled::Line$Info* info) {return 0;}
	virtual ::javax::sound::sampled::Mixer$Info* getMixerInfo() {return nullptr;}
	virtual $Array<::javax::sound::sampled::Line$Info>* getSourceLineInfo() {return nullptr;}
	virtual $Array<::javax::sound::sampled::Line$Info>* getSourceLineInfo(::javax::sound::sampled::Line$Info* info) {return nullptr;}
	virtual $Array<::javax::sound::sampled::Line>* getSourceLines() {return nullptr;}
	virtual $Array<::javax::sound::sampled::Line$Info>* getTargetLineInfo() {return nullptr;}
	virtual $Array<::javax::sound::sampled::Line$Info>* getTargetLineInfo(::javax::sound::sampled::Line$Info* info) {return nullptr;}
	virtual $Array<::javax::sound::sampled::Line>* getTargetLines() {return nullptr;}
	virtual bool isLineSupported(::javax::sound::sampled::Line$Info* info) {return false;}
	virtual bool isSynchronizationSupported($Array<::javax::sound::sampled::Line>* lines, bool maintainSync) {return false;}
	virtual void synchronize($Array<::javax::sound::sampled::Line>* lines, bool maintainSync) {}
	virtual void unsynchronize($Array<::javax::sound::sampled::Line>* lines) {}
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_Mixer_h_