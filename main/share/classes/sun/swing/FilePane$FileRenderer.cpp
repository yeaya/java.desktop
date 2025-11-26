#include <sun/swing/FilePane$FileRenderer.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/io/File.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$FileRenderer_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$FileRenderer, this$0)},
	{}
};

$MethodInfo _FilePane$FileRenderer_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane;)V", nullptr, $PROTECTED, $method(static_cast<void(FilePane$FileRenderer::*)($FilePane*)>(&FilePane$FileRenderer::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC},
	{}
};

$InnerClassInfo _FilePane$FileRenderer_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$FileRenderer", "sun.swing.FilePane", "FileRenderer", $PROTECTED},
	{}
};

$ClassInfo _FilePane$FileRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.FilePane$FileRenderer",
	"javax.swing.DefaultListCellRenderer",
	nullptr,
	_FilePane$FileRenderer_FieldInfo_,
	_FilePane$FileRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_FilePane$FileRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$FileRenderer($Class* clazz) {
	return $of($alloc(FilePane$FileRenderer));
}

void FilePane$FileRenderer::init$($FilePane* this$0) {
	$set(this, this$0, this$0);
	$DefaultListCellRenderer::init$();
}

$Component* FilePane$FileRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->listViewWindowsStyle && !$nc(list)->isFocusOwner()) {
		isSelected = false;
	}
	$DefaultListCellRenderer::getListCellRendererComponent(list, value, index, isSelected, cellHasFocus);
	$var($File, file, $cast($File, value));
	$var($String, fileName, $nc($(this->this$0->getFileChooser()))->getName(file));
	setText(fileName);
	setFont($($nc(list)->getFont()));
	$var($Icon, icon, $nc($(this->this$0->getFileChooser()))->getIcon(file));
	if (icon != nullptr) {
		setIcon(icon);
	} else if ($nc(($($nc($($nc($(this->this$0->getFileChooser()))->getFileSystemView()))->isTraversable(file))))->booleanValue()) {
		$init($File);
		setText($$str({fileName, $File::separator}));
	}
	return this;
}

FilePane$FileRenderer::FilePane$FileRenderer() {
}

$Class* FilePane$FileRenderer::load$($String* name, bool initialize) {
	$loadClass(FilePane$FileRenderer, name, initialize, &_FilePane$FileRenderer_ClassInfo_, allocate$FilePane$FileRenderer);
	return class$;
}

$Class* FilePane$FileRenderer::class$ = nullptr;

	} // swing
} // sun