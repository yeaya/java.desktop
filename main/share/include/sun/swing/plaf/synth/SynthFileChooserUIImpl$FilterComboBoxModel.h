#ifndef _sun_swing_plaf_synth_SynthFileChooserUIImpl$FilterComboBoxModel_h_
#define _sun_swing_plaf_synth_SynthFileChooserUIImpl$FilterComboBoxModel_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUIImpl$FilterComboBoxModel
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

class $import SynthFileChooserUIImpl$FilterComboBoxModel : public ::javax::swing::AbstractListModel, public ::javax::swing::ComboBoxModel, public ::java::beans::PropertyChangeListener {
	$class(SynthFileChooserUIImpl$FilterComboBoxModel, $NO_CLASS_INIT, ::javax::swing::AbstractListModel, ::javax::swing::ComboBoxModel, ::java::beans::PropertyChangeListener)
public:
	SynthFileChooserUIImpl$FilterComboBoxModel();
	virtual void addListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0);
	virtual $Object* getElementAt(int32_t index) override;
	virtual $Object* getSelectedItem() override;
	virtual int32_t getSize() override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void removeListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual void setSelectedItem(Object$* filter) override;
	virtual $String* toString() override;
	::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0 = nullptr;
	$Array<::javax::swing::filechooser::FileFilter>* filters = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUIImpl$FilterComboBoxModel_h_