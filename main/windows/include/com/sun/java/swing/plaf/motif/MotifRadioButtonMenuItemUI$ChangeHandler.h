#ifndef _com_sun_java_swing_plaf_motif_MotifRadioButtonMenuItemUI$ChangeHandler_h_
#define _com_sun_java_swing_plaf_motif_MotifRadioButtonMenuItemUI$ChangeHandler_h_
//$ class com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI$ChangeHandler
//$ extends javax.swing.event.ChangeListener
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/event/ChangeListener.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifRadioButtonMenuItemUI;
					}
				}
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifRadioButtonMenuItemUI$ChangeHandler : public ::javax::swing::event::ChangeListener, public ::java::io::Serializable {
	$class(MotifRadioButtonMenuItemUI$ChangeHandler, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener, ::java::io::Serializable)
public:
	MotifRadioButtonMenuItemUI$ChangeHandler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::java::swing::plaf::motif::MotifRadioButtonMenuItemUI* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	::com::sun::java::swing::plaf::motif::MotifRadioButtonMenuItemUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifRadioButtonMenuItemUI$ChangeHandler_h_