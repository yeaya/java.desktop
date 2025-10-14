#ifndef _javax_sound_sampled_Line_h_
#define _javax_sound_sampled_Line_h_
//$ interface javax.sound.sampled.Line
//$ extends java.lang.AutoCloseable

#include <java/lang/Array.h>
#include <java/lang/AutoCloseable.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class Control;
			class Control$Type;
			class Line$Info;
			class LineListener;
		}
	}
}

namespace javax {
	namespace sound {
		namespace sampled {

class $export Line : public ::java::lang::AutoCloseable {
	$interface(Line, $NO_CLASS_INIT, ::java::lang::AutoCloseable)
public:
	virtual void addLineListener(::javax::sound::sampled::LineListener* listener) {}
	virtual void close() override {}
	virtual ::javax::sound::sampled::Control* getControl(::javax::sound::sampled::Control$Type* control) {return nullptr;}
	virtual $Array<::javax::sound::sampled::Control>* getControls() {return nullptr;}
	virtual ::javax::sound::sampled::Line$Info* getLineInfo() {return nullptr;}
	virtual bool isControlSupported(::javax::sound::sampled::Control$Type* control) {return false;}
	virtual bool isOpen() {return false;}
	virtual void open() {}
	virtual void removeLineListener(::javax::sound::sampled::LineListener* listener) {}
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_Line_h_