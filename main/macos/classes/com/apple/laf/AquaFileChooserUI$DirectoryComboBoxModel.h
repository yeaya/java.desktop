#ifndef _com_apple_laf_AquaFileChooserUI$DirectoryComboBoxModel_h_
#define _com_apple_laf_AquaFileChooserUI$DirectoryComboBoxModel_h_
//$ class com.apple.laf.AquaFileChooserUI$DirectoryComboBoxModel
//$ extends javax.swing.AbstractListModel
//$ implements javax.swing.ComboBoxModel

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
	namespace io {
		class File;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$DirectoryComboBoxModel : public ::javax::swing::AbstractListModel, public ::javax::swing::ComboBoxModel {
	$class(AquaFileChooserUI$DirectoryComboBoxModel, $NO_CLASS_INIT, ::javax::swing::AbstractListModel, ::javax::swing::ComboBoxModel)
public:
	AquaFileChooserUI$DirectoryComboBoxModel();
	virtual void addListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual void addItem(::java::io::File* directory);
	virtual $Object* getElementAt(int32_t index) override;
	virtual $Object* getSelectedItem() override;
	virtual int32_t getSize() override;
	virtual void removeListDataListener(::javax::swing::event::ListDataListener* l) override;
	void removeSelectedDirectory();
	virtual void setSelectedItem(Object$* selectedDirectory) override;
	virtual $String* toString() override;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
	::java::util::Vector* fDirectories = nullptr;
	int32_t topIndex = 0;
	int32_t fPathCount = 0;
	::java::io::File* fSelectedDirectory = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$DirectoryComboBoxModel_h_