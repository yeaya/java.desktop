#ifndef _javax_swing_AbstractListModel_h_
#define _javax_swing_AbstractListModel_h_
//$ class javax.swing.AbstractListModel
//$ extends javax.swing.ListModel
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/ListModel.h>

namespace java {
	namespace util {
		class EventListener;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class EventListenerList;
			class ListDataListener;
		}
	}
}

namespace javax {
	namespace swing {

class $import AbstractListModel : public ::javax::swing::ListModel, public ::java::io::Serializable {
	$class(AbstractListModel, $NO_CLASS_INIT, ::javax::swing::ListModel, ::java::io::Serializable)
public:
	AbstractListModel();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual void fireContentsChanged(Object$* source, int32_t index0, int32_t index1);
	virtual void fireIntervalAdded(Object$* source, int32_t index0, int32_t index1);
	virtual void fireIntervalRemoved(Object$* source, int32_t index0, int32_t index1);
	virtual $Array<::javax::swing::event::ListDataListener>* getListDataListeners();
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType);
	virtual void removeListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual $String* toString() override;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_AbstractListModel_h_