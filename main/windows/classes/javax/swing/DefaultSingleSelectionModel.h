#ifndef _javax_swing_DefaultSingleSelectionModel_h_
#define _javax_swing_DefaultSingleSelectionModel_h_
//$ class javax.swing.DefaultSingleSelectionModel
//$ extends javax.swing.SingleSelectionModel
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/SingleSelectionModel.h>

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

class $export DefaultSingleSelectionModel : public ::javax::swing::SingleSelectionModel, public ::java::io::Serializable {
	$class(DefaultSingleSelectionModel, $NO_CLASS_INIT, ::javax::swing::SingleSelectionModel, ::java::io::Serializable)
public:
	DefaultSingleSelectionModel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l) override;
	virtual void clearSelection() override;
	virtual void fireStateChanged();
	virtual $Array<::javax::swing::event::ChangeListener>* getChangeListeners();
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType);
	virtual int32_t getSelectedIndex() override;
	virtual bool isSelected() override;
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l) override;
	virtual void setSelectedIndex(int32_t index) override;
	virtual $String* toString() override;
	::javax::swing::event::ChangeEvent* changeEvent = nullptr;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
	int32_t index = 0;
};

	} // swing
} // javax

#endif // _javax_swing_DefaultSingleSelectionModel_h_