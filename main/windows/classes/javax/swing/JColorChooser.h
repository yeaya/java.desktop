#ifndef _javax_swing_JColorChooser_h_
#define _javax_swing_JColorChooser_h_
//$ class javax.swing.JColorChooser
//$ extends javax.swing.JComponent
//$ implements javax.accessibility.Accessible

#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>

#pragma push_macro("CHOOSER_PANELS_PROPERTY")
#undef CHOOSER_PANELS_PROPERTY
#pragma push_macro("PREVIEW_PANEL_PROPERTY")
#undef PREVIEW_PANEL_PROPERTY
#pragma push_macro("SELECTION_MODEL_PROPERTY")
#undef SELECTION_MODEL_PROPERTY

namespace java {
	namespace awt {
		class Color;
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionListener;
		}
	}
}
namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class JDialog;
	}
}
namespace javax {
	namespace swing {
		namespace colorchooser {
			class AbstractColorChooserPanel;
			class ColorSelectionModel;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ColorChooserUI;
			class ComponentUI;
		}
	}
}

namespace javax {
	namespace swing {

class $export JColorChooser : public ::javax::swing::JComponent, public ::javax::accessibility::Accessible {
	$class(JColorChooser, 0, ::javax::swing::JComponent, ::javax::accessibility::Accessible)
public:
	JColorChooser();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::awt::Color* initialColor);
	void init$(::javax::swing::colorchooser::ColorSelectionModel* model);
	virtual void addChooserPanel(::javax::swing::colorchooser::AbstractColorChooserPanel* panel);
	static ::javax::swing::JDialog* createDialog(::java::awt::Component* c, $String* title, bool modal, ::javax::swing::JColorChooser* chooserPane, ::java::awt::event::ActionListener* okListener, ::java::awt::event::ActionListener* cancelListener);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $Array<::javax::swing::colorchooser::AbstractColorChooserPanel>* getChooserPanels();
	virtual ::java::awt::Color* getColor();
	virtual bool getDragEnabled();
	virtual ::javax::swing::JComponent* getPreviewPanel();
	virtual ::javax::swing::colorchooser::ColorSelectionModel* getSelectionModel();
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	using ::javax::swing::JComponent::list;
	virtual $String* paramString() override;
	using ::javax::swing::JComponent::remove;
	virtual ::javax::swing::colorchooser::AbstractColorChooserPanel* removeChooserPanel(::javax::swing::colorchooser::AbstractColorChooserPanel* panel);
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	virtual void setChooserPanels($Array<::javax::swing::colorchooser::AbstractColorChooserPanel>* panels);
	virtual void setColor(::java::awt::Color* color);
	virtual void setColor(int32_t r, int32_t g, int32_t b);
	virtual void setColor(int32_t c);
	virtual void setDragEnabled(bool b);
	virtual void setPreviewPanel(::javax::swing::JComponent* preview);
	virtual void setSelectionModel(::javax::swing::colorchooser::ColorSelectionModel* newModel);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::ColorChooserUI* ui);
	static ::java::awt::Color* showDialog(::java::awt::Component* component, $String* title, ::java::awt::Color* initialColor);
	static ::java::awt::Color* showDialog(::java::awt::Component* component, $String* title, ::java::awt::Color* initialColor, bool colorTransparencySelectionEnabled);
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	::javax::swing::colorchooser::ColorSelectionModel* selectionModel = nullptr;
	::javax::swing::JComponent* previewPanel = nullptr;
	$Array<::javax::swing::colorchooser::AbstractColorChooserPanel>* chooserPanels = nullptr;
	bool dragEnabled = false;
	static $String* SELECTION_MODEL_PROPERTY;
	static $String* PREVIEW_PANEL_PROPERTY;
	static $String* CHOOSER_PANELS_PROPERTY;
	::javax::accessibility::AccessibleContext* accessibleContext = nullptr;
};

	} // swing
} // javax

#pragma pop_macro("CHOOSER_PANELS_PROPERTY")
#pragma pop_macro("PREVIEW_PANEL_PROPERTY")
#pragma pop_macro("SELECTION_MODEL_PROPERTY")

#endif // _javax_swing_JColorChooser_h_