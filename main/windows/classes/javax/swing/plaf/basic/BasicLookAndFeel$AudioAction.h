#ifndef _javax_swing_plaf_basic_BasicLookAndFeel$AudioAction_h_
#define _javax_swing_plaf_basic_BasicLookAndFeel$AudioAction_h_
//$ class javax.swing.plaf.basic.BasicLookAndFeel$AudioAction
//$ extends javax.swing.AbstractAction
//$ implements javax.sound.sampled.LineListener

#include <java/lang/Array.h>
#include <javax/sound/sampled/LineListener.h>
#include <javax/swing/AbstractAction.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class Clip;
			class LineEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicLookAndFeel;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicLookAndFeel$AudioAction : public ::javax::swing::AbstractAction, public ::javax::sound::sampled::LineListener {
	$class(BasicLookAndFeel$AudioAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction, ::javax::sound::sampled::LineListener)
public:
	BasicLookAndFeel$AudioAction();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicLookAndFeel* this$0, $String* name, $String* resource);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	void cancelCurrentSound(::javax::sound::sampled::Clip* clip);
	virtual $String* toString() override;
	virtual void update(::javax::sound::sampled::LineEvent* event) override;
	::javax::swing::plaf::basic::BasicLookAndFeel* this$0 = nullptr;
	$String* audioResource = nullptr;
	$bytes* audioBuffer = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicLookAndFeel$AudioAction_h_