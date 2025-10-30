#include <sun/swing/FilePane$FileChooserUIAccessor.h>

#include <java/awt/event/MouseListener.h>
#include <java/io/File.h>
#include <javax/swing/Action.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JList.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $MouseListener = ::java::awt::event::MouseListener;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JList = ::javax::swing::JList;
using $JPanel = ::javax::swing::JPanel;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

$MethodInfo _FilePane$FileChooserUIAccessor_MethodInfo_[] = {
	{"createDetailsView", "()Ljavax/swing/JPanel;", nullptr, $PUBLIC | $ABSTRACT},
	{"createDoubleClickListener", "(Ljavax/swing/JList;)Ljava/awt/event/MouseListener;", "(Ljavax/swing/JList<*>;)Ljava/awt/event/MouseListener;", $PUBLIC | $ABSTRACT},
	{"createList", "()Ljavax/swing/JPanel;", nullptr, $PUBLIC | $ABSTRACT},
	{"createListSelectionListener", "()Ljavax/swing/event/ListSelectionListener;", nullptr, $PUBLIC | $ABSTRACT},
	{"getApproveSelectionAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC | $ABSTRACT},
	{"getChangeToParentDirectoryAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDirectory", "()Ljava/io/File;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFileChooser", "()Ljavax/swing/JFileChooser;", nullptr, $PUBLIC | $ABSTRACT},
	{"getModel", "()Ljavax/swing/plaf/basic/BasicDirectoryModel;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNewFolderAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC | $ABSTRACT},
	{"isDirectorySelected", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _FilePane$FileChooserUIAccessor_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$FileChooserUIAccessor", "sun.swing.FilePane", "FileChooserUIAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FilePane$FileChooserUIAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.swing.FilePane$FileChooserUIAccessor",
	nullptr,
	nullptr,
	nullptr,
	_FilePane$FileChooserUIAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_FilePane$FileChooserUIAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$FileChooserUIAccessor($Class* clazz) {
	return $of($alloc(FilePane$FileChooserUIAccessor));
}

$Class* FilePane$FileChooserUIAccessor::load$($String* name, bool initialize) {
	$loadClass(FilePane$FileChooserUIAccessor, name, initialize, &_FilePane$FileChooserUIAccessor_ClassInfo_, allocate$FilePane$FileChooserUIAccessor);
	return class$;
}

$Class* FilePane$FileChooserUIAccessor::class$ = nullptr;

	} // swing
} // sun