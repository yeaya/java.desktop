#ifndef _javax_swing_plaf_metal_MetalFileChooserUI$FilterComboBoxModel_h_
#define _javax_swing_plaf_metal_MetalFileChooserUI$FilterComboBoxModel_h_
//$ class javax.swing.plaf.metal.MetalFileChooserUI$FilterComboBoxModel
//$ extends javax.swing.AbstractListModel
//$ implements javax.swing.ComboBoxModel,java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/ComboBoxModel.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		namespace filechooser {
			class FileFilter;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalFileChooserUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalFileChooserUI$FilterComboBoxModel : public ::javax::swing::AbstractListModel, public ::javax::swing::ComboBoxModel, public ::java::beans::PropertyChangeListener {
	$class(MetalFileChooserUI$FilterComboBoxModel, $NO_CLASS_INIT, ::javax::swing::AbstractListModel, ::javax::swing::ComboBoxModel, ::java::beans::PropertyChangeListener)
public:
	MetalFileChooserUI$FilterComboBoxModel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void addListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::metal::MetalFileChooserUI* this$0);
	virtual $Object* getElementAt(int32_t index) override;
	virtual $Object* getSelectedItem() override;
	virtual int32_t getSize() override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void removeListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual void setSelectedItem(Object$* filter) override;
	virtual $String* toString() override;
	::javax::swing::plaf::metal::MetalFileChooserUI* this$0 = nullptr;
	$Array<::javax::swing::filechooser::FileFilter>* filters = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalFileChooserUI$FilterComboBoxModel_h_