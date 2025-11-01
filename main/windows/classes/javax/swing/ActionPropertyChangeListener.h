#ifndef _javax_swing_ActionPropertyChangeListener_h_
#define _javax_swing_ActionPropertyChangeListener_h_
//$ class javax.swing.ActionPropertyChangeListener
//$ extends java.beans.PropertyChangeListener
//$ implements java.io.Serializable

#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace javax {
	namespace swing {
		class Action;
		class ActionPropertyChangeListener$OwnedWeakReference;
		class JComponent;
	}
}

namespace javax {
	namespace swing {

class ActionPropertyChangeListener : public ::java::beans::PropertyChangeListener, public ::java::io::Serializable {
	$class(ActionPropertyChangeListener, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener, ::java::io::Serializable)
public:
	ActionPropertyChangeListener();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JComponent* c, ::javax::swing::Action* a);
	virtual void actionPropertyChanged(::javax::swing::JComponent* target, ::javax::swing::Action* action, ::java::beans::PropertyChangeEvent* e) {}
	virtual ::javax::swing::Action* getAction();
	static ::java::lang::ref::ReferenceQueue* getQueue();
	virtual ::javax::swing::JComponent* getTarget();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	void readObject(::java::io::ObjectInputStream* s);
	void setTarget(::javax::swing::JComponent* c);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static ::java::lang::ref::ReferenceQueue* queue;
	::javax::swing::ActionPropertyChangeListener$OwnedWeakReference* target = nullptr;
	::javax::swing::Action* action = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ActionPropertyChangeListener_h_