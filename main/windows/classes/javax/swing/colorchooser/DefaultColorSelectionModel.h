#ifndef _javax_swing_colorchooser_DefaultColorSelectionModel_h_
#define _javax_swing_colorchooser_DefaultColorSelectionModel_h_
//$ class javax.swing.colorchooser.DefaultColorSelectionModel
//$ extends javax.swing.colorchooser.ColorSelectionModel
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/colorchooser/ColorSelectionModel.h>

namespace java {
	namespace awt {
		class Color;
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
		namespace colorchooser {

class $export DefaultColorSelectionModel : public ::javax::swing::colorchooser::ColorSelectionModel, public ::java::io::Serializable {
	$class(DefaultColorSelectionModel, $NO_CLASS_INIT, ::javax::swing::colorchooser::ColorSelectionModel, ::java::io::Serializable)
public:
	DefaultColorSelectionModel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::awt::Color* color);
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l) override;
	virtual void fireStateChanged();
	virtual $Array<::javax::swing::event::ChangeListener>* getChangeListeners();
	virtual ::java::awt::Color* getSelectedColor() override;
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l) override;
	virtual void setSelectedColor(::java::awt::Color* color) override;
	virtual $String* toString() override;
	::javax::swing::event::ChangeEvent* changeEvent = nullptr;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
	::java::awt::Color* selectedColor = nullptr;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_DefaultColorSelectionModel_h_