#ifndef _javax_swing_JTree$EmptySelectionModel_h_
#define _javax_swing_JTree$EmptySelectionModel_h_
//$ class javax.swing.JTree$EmptySelectionModel
//$ extends javax.swing.tree.DefaultTreeSelectionModel

#include <java/lang/Array.h>
#include <javax/swing/tree/DefaultTreeSelectionModel.h>

namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class TreeSelectionListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class RowMapper;
			class TreePath;
		}
	}
}

namespace javax {
	namespace swing {

class $import JTree$EmptySelectionModel : public ::javax::swing::tree::DefaultTreeSelectionModel {
	$class(JTree$EmptySelectionModel, 0, ::javax::swing::tree::DefaultTreeSelectionModel)
public:
	JTree$EmptySelectionModel();
	void init$();
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual void addSelectionPaths($Array<::javax::swing::tree::TreePath>* paths) override;
	virtual void addTreeSelectionListener(::javax::swing::event::TreeSelectionListener* listener) override;
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual void removeSelectionPaths($Array<::javax::swing::tree::TreePath>* paths) override;
	virtual void removeTreeSelectionListener(::javax::swing::event::TreeSelectionListener* listener) override;
	virtual void setRowMapper(::javax::swing::tree::RowMapper* mapper) override;
	virtual void setSelectionMode(int32_t mode) override;
	virtual void setSelectionPaths($Array<::javax::swing::tree::TreePath>* paths) override;
	static ::javax::swing::JTree$EmptySelectionModel* sharedInstance();
	static ::javax::swing::JTree$EmptySelectionModel* sharedInstance$;
};

	} // swing
} // javax

#endif // _javax_swing_JTree$EmptySelectionModel_h_