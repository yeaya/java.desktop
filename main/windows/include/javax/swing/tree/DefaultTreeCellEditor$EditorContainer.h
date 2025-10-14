#ifndef _javax_swing_tree_DefaultTreeCellEditor$EditorContainer_h_
#define _javax_swing_tree_DefaultTreeCellEditor$EditorContainer_h_
//$ class javax.swing.tree.DefaultTreeCellEditor$EditorContainer
//$ extends java.awt.Container

#include <java/awt/Container.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class DefaultTreeCellEditor;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $import DefaultTreeCellEditor$EditorContainer : public ::java::awt::Container {
	$class(DefaultTreeCellEditor$EditorContainer, $NO_CLASS_INIT, ::java::awt::Container)
public:
	DefaultTreeCellEditor$EditorContainer();
	using ::java::awt::Container::add;
	using ::java::awt::Container::getMousePosition;
	void init$(::javax::swing::tree::DefaultTreeCellEditor* this$0);
	virtual void EditorContainer();
	int32_t calculateIconY(::javax::swing::Icon* icon);
	virtual void doLayout() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::java::awt::Container::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::java::awt::Container::remove;
	::javax::swing::tree::DefaultTreeCellEditor* this$0 = nullptr;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_DefaultTreeCellEditor$EditorContainer_h_