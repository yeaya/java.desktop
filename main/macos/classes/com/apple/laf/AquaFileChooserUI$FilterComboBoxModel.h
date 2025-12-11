#ifndef _com_apple_laf_AquaFileChooserUI$FilterComboBoxModel_h_
#define _com_apple_laf_AquaFileChooserUI$FilterComboBoxModel_h_
//$ class com.apple.laf.AquaFileChooserUI$FilterComboBoxModel
//$ extends javax.swing.AbstractListModel
//$ implements javax.swing.ComboBoxModel,java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/ComboBoxModel.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileChooserUI;
		}
	}
}
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

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$FilterComboBoxModel : public ::javax::swing::AbstractListModel, public ::javax::swing::ComboBoxModel, public ::java::beans::PropertyChangeListener {
	$class(AquaFileChooserUI$FilterComboBoxModel, $NO_CLASS_INIT, ::javax::swing::AbstractListModel, ::javax::swing::ComboBoxModel, ::java::beans::PropertyChangeListener)
public:
	AquaFileChooserUI$FilterComboBoxModel();
	virtual void addListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual $Object* getElementAt(int32_t index) override;
	virtual $Object* getSelectedItem() override;
	virtual int32_t getSize() override;
	bool isSelectedFileFilterInModel(Object$* filter);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void removeListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual void setSelectedItem(Object$* filter) override;
	virtual $String* toString() override;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
	$Array<::javax::swing::filechooser::FileFilter>* filters = nullptr;
	$Object* oldFileFilter = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$FilterComboBoxModel_h_