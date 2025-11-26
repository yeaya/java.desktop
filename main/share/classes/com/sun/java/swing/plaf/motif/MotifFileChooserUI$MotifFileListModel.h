#ifndef _com_sun_java_swing_plaf_motif_MotifFileChooserUI$MotifFileListModel_h_
#define _com_sun_java_swing_plaf_motif_MotifFileChooserUI$MotifFileListModel_h_
//$ class com.sun.java.swing.plaf.motif.MotifFileChooserUI$MotifFileListModel
//$ extends javax.swing.AbstractListModel
//$ implements javax.swing.event.ListDataListener

#include <javax/swing/AbstractListModel.h>
#include <javax/swing/event/ListDataListener.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifFileChooserUI;
					}
				}
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListDataEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifFileChooserUI$MotifFileListModel : public ::javax::swing::AbstractListModel, public ::javax::swing::event::ListDataListener {
	$class(MotifFileChooserUI$MotifFileListModel, $NO_CLASS_INIT, ::javax::swing::AbstractListModel, ::javax::swing::event::ListDataListener)
public:
	MotifFileChooserUI$MotifFileListModel();
	using ::javax::swing::AbstractListModel::fireContentsChanged;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::java::swing::plaf::motif::MotifFileChooserUI* this$0);
	virtual bool contains(Object$* o);
	virtual void contentsChanged(::javax::swing::event::ListDataEvent* e) override;
	virtual void fireContentsChanged();
	virtual $Object* getElementAt(int32_t index) override;
	virtual int32_t getSize() override;
	virtual int32_t indexOf(Object$* o);
	virtual void intervalAdded(::javax::swing::event::ListDataEvent* e) override;
	virtual void intervalRemoved(::javax::swing::event::ListDataEvent* e) override;
	virtual $String* toString() override;
	::com::sun::java::swing::plaf::motif::MotifFileChooserUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifFileChooserUI$MotifFileListModel_h_