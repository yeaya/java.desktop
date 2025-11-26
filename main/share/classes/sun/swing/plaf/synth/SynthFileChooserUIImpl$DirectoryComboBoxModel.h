#ifndef _sun_swing_plaf_synth_SynthFileChooserUIImpl$DirectoryComboBoxModel_h_
#define _sun_swing_plaf_synth_SynthFileChooserUIImpl$DirectoryComboBoxModel_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUIImpl$DirectoryComboBoxModel
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
namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthFileChooserUIImpl;
			}
		}
	}
}

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

class $export SynthFileChooserUIImpl$DirectoryComboBoxModel : public ::javax::swing::AbstractListModel, public ::javax::swing::ComboBoxModel {
	$class(SynthFileChooserUIImpl$DirectoryComboBoxModel, $NO_CLASS_INIT, ::javax::swing::AbstractListModel, ::javax::swing::ComboBoxModel)
public:
	SynthFileChooserUIImpl$DirectoryComboBoxModel();
	virtual void addListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0);
	virtual void addItem(::java::io::File* directory);
	void calculateDepths();
	virtual int32_t getDepth(int32_t i);
	virtual $Object* getElementAt(int32_t index) override;
	virtual $Object* getSelectedItem() override;
	virtual int32_t getSize() override;
	virtual void removeListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual void setSelectedItem(Object$* selectedDirectory) override;
	virtual $String* toString() override;
	::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0 = nullptr;
	::java::util::Vector* directories = nullptr;
	$ints* depths = nullptr;
	::java::io::File* selectedDirectory = nullptr;
	::javax::swing::JFileChooser* chooser = nullptr;
	::javax::swing::filechooser::FileSystemView* fsv = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUIImpl$DirectoryComboBoxModel_h_