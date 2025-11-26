#ifndef _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$GTKDirectoryListModel_h_
#define _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$GTKDirectoryListModel_h_
//$ class com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKDirectoryListModel
//$ extends javax.swing.AbstractListModel
//$ implements javax.swing.event.ListDataListener

#include <javax/swing/AbstractListModel.h>
#include <javax/swing/event/ListDataListener.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class GTKFileChooserUI;
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class File;
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
					namespace gtk {

class GTKFileChooserUI$GTKDirectoryListModel : public ::javax::swing::AbstractListModel, public ::javax::swing::event::ListDataListener {
	$class(GTKFileChooserUI$GTKDirectoryListModel, $NO_CLASS_INIT, ::javax::swing::AbstractListModel, ::javax::swing::event::ListDataListener)
public:
	GTKFileChooserUI$GTKDirectoryListModel();
	using ::javax::swing::AbstractListModel::fireContentsChanged;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0);
	virtual void contentsChanged(::javax::swing::event::ListDataEvent* e) override;
	void directoryChanged();
	virtual void fireContentsChanged();
	virtual $Object* getElementAt(int32_t index) override;
	virtual int32_t getSize() override;
	virtual void intervalAdded(::javax::swing::event::ListDataEvent* e) override;
	virtual void intervalRemoved(::javax::swing::event::ListDataEvent* e) override;
	virtual $String* toString() override;
	::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0 = nullptr;
	::java::io::File* curDir = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$GTKDirectoryListModel_h_