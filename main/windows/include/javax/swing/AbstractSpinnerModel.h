#ifndef _javax_swing_AbstractSpinnerModel_h_
#define _javax_swing_AbstractSpinnerModel_h_
//$ class javax.swing.AbstractSpinnerModel
//$ extends javax.swing.SpinnerModel
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/SpinnerModel.h>

namespace java {
	namespace util {
		class EventListener;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
			class ChangeListener;
			class EventListenerList;
		}
	}
}

namespace javax {
	namespace swing {

class $import AbstractSpinnerModel : public ::javax::swing::SpinnerModel, public ::java::io::Serializable {
	$class(AbstractSpinnerModel, $NO_CLASS_INIT, ::javax::swing::SpinnerModel, ::java::io::Serializable)
public:
	AbstractSpinnerModel();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l) override;
	virtual void fireStateChanged();
	virtual $Array<::javax::swing::event::ChangeListener>* getChangeListeners();
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType);
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l) override;
	virtual $String* toString() override;
	::javax::swing::event::ChangeEvent* changeEvent = nullptr;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_AbstractSpinnerModel_h_