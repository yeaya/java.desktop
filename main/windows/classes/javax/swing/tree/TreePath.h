#ifndef _javax_swing_tree_TreePath_h_
#define _javax_swing_tree_TreePath_h_
//$ class javax.swing.tree.TreePath
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		namespace tree {

class $export TreePath : public ::java::io::Serializable {
	$class(TreePath, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	TreePath();
	void init$($ObjectArray* path);
	void init$(Object$* lastPathComponent);
	void init$(::javax::swing::tree::TreePath* parent, Object$* lastPathComponent);
	void init$($ObjectArray* path, int32_t length);
	void init$();
	virtual bool equals(Object$* o) override;
	virtual $Object* getLastPathComponent();
	virtual ::javax::swing::tree::TreePath* getParentPath();
	virtual $ObjectArray* getPath();
	virtual $Object* getPathComponent(int32_t index);
	virtual int32_t getPathCount();
	virtual int32_t hashCode() override;
	virtual bool isDescendant(::javax::swing::tree::TreePath* aTreePath);
	virtual ::javax::swing::tree::TreePath* pathByAddingChild(Object$* child);
	virtual $String* toString() override;
	::javax::swing::tree::TreePath* parentPath = nullptr;
	$Object* lastPathComponent = nullptr;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_TreePath_h_