#ifndef _javax_swing_plaf_metal_MetalFileChooserUI$DirectoryComboBoxModel_h_
#define _javax_swing_plaf_metal_MetalFileChooserUI$DirectoryComboBoxModel_h_
//$ class javax.swing.plaf.metal.MetalFileChooserUI$DirectoryComboBoxModel
//$ extends javax.swing.AbstractListModel
//$ implements javax.swing.ComboBoxModel

#include <java/lang/Array.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/ComboBoxModel.h>

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
namespace javax {
	namespace swing {
		class JFileChooser;
	}
}
namespace javax {
	namespace swing {
		namespace filechooser {
			class FileSystemView;
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

class $import MetalFileChooserUI$DirectoryComboBoxModel : public ::javax::swing::AbstractListModel, public ::javax::swing::ComboBoxModel {
	$class(MetalFileChooserUI$DirectoryComboBoxModel, $NO_CLASS_INIT, ::javax::swing::AbstractListModel, ::javax::swing::ComboBoxModel)
public:
	MetalFileChooserUI$DirectoryComboBoxModel();
	virtual void addListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::metal::MetalFileChooserUI* this$0);
	void addItem(::java::io::File* directory);
	void calculateDepths();
	virtual int32_t getDepth(int32_t i);
	virtual $Object* getElementAt(int32_t index) override;
	virtual $Object* getSelectedItem() override;
	virtual int32_t getSize() override;
	virtual void removeListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual void setSelectedItem(Object$* selectedDirectory) override;
	virtual $String* toString() override;
	::javax::swing::plaf::metal::MetalFileChooserUI* this$0 = nullptr;
	::java::util::Vector* directories = nullptr;
	$ints* depths = nullptr;
	::java::io::File* selectedDirectory = nullptr;
	::javax::swing::JFileChooser* chooser = nullptr;
	::javax::swing::filechooser::FileSystemView* fsv = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalFileChooserUI$DirectoryComboBoxModel_h_