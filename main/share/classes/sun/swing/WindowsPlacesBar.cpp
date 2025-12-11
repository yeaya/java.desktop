#include <sun/swing/WindowsPlacesBar.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/io/File.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Box.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/BevelBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <sun/awt/OSInfo$OSType.h>
#include <sun/awt/OSInfo$WindowsVersion.h>
#include <sun/awt/OSInfo.h>
#include <sun/awt/shell/ShellFolder.h>
#include <jcpp.h>

#undef BOTTOM
#undef CENTER
#undef CENTER_ALIGNMENT
#undef DIRECTORY_CHANGED_PROPERTY
#undef LOWERED
#undef TRUE
#undef VERTICAL
#undef WINDOWS
#undef WINDOWS_XP

using $JToggleButtonArray = $Array<::javax::swing::JToggleButton>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Box = ::javax::swing::Box;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JToggleButton = ::javax::swing::JToggleButton;
using $JToolBar = ::javax::swing::JToolBar;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $BevelBorder = ::javax::swing::border::BevelBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $OSInfo = ::sun::awt::OSInfo;
using $OSInfo$OSType = ::sun::awt::OSInfo$OSType;
using $OSInfo$WindowsVersion = ::sun::awt::OSInfo$WindowsVersion;
using $ShellFolder = ::sun::awt::shell::ShellFolder;

namespace sun {
	namespace swing {

$FieldInfo _WindowsPlacesBar_FieldInfo_[] = {
	{"fc", "Ljavax/swing/JFileChooser;", nullptr, 0, $field(WindowsPlacesBar, fc)},
	{"buttons", "[Ljavax/swing/JToggleButton;", nullptr, 0, $field(WindowsPlacesBar, buttons)},
	{"buttonGroup", "Ljavax/swing/ButtonGroup;", nullptr, 0, $field(WindowsPlacesBar, buttonGroup)},
	{"files", "[Ljava/io/File;", nullptr, 0, $field(WindowsPlacesBar, files)},
	{"buttonSize", "Ljava/awt/Dimension;", nullptr, $FINAL, $field(WindowsPlacesBar, buttonSize)},
	{}
};

$MethodInfo _WindowsPlacesBar_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JFileChooser;Z)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsPlacesBar::*)($JFileChooser*,bool)>(&WindowsPlacesBar::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"doDirectoryChanged", "(Ljava/io/File;)V", nullptr, $PROTECTED},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WindowsPlacesBar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.WindowsPlacesBar",
	"javax.swing.JToolBar",
	"java.awt.event.ActionListener,java.beans.PropertyChangeListener",
	_WindowsPlacesBar_FieldInfo_,
	_WindowsPlacesBar_MethodInfo_
};

$Object* allocate$WindowsPlacesBar($Class* clazz) {
	return $of($alloc(WindowsPlacesBar));
}

$String* WindowsPlacesBar::toString() {
	 return this->$JToolBar::toString();
}

int32_t WindowsPlacesBar::hashCode() {
	 return this->$JToolBar::hashCode();
}

bool WindowsPlacesBar::equals(Object$* arg0) {
	 return this->$JToolBar::equals(arg0);
}

$Object* WindowsPlacesBar::clone() {
	 return this->$JToolBar::clone();
}

void WindowsPlacesBar::finalize() {
	this->$JToolBar::finalize();
}

void WindowsPlacesBar::init$($JFileChooser* fc, bool isXPStyle) {
	$useLocalCurrentObjectStackCache();
	$JToolBar::init$($JToolBar::VERTICAL);
	$set(this, fc, fc);
	setFloatable(false);
	$init($Boolean);
	putClientProperty("JToolBar.isRollover"_s, $Boolean::TRUE);
	$init($OSInfo$OSType);
	bool var$0 = $OSInfo::getOSType() == $OSInfo$OSType::WINDOWS;
	bool isXPPlatform = (var$0 && $nc($($OSInfo::getWindowsVersion()))->compareTo($OSInfo::WINDOWS_XP) >= 0);
	if (isXPStyle) {
		$set(this, buttonSize, $new($Dimension, 83, 69));
		putClientProperty("XPStyle.subAppName"_s, "placesbar"_s);
		setBorder($$new($EmptyBorder, 1, 1, 1, 1));
	} else {
		$set(this, buttonSize, $new($Dimension, 83, isXPPlatform ? 65 : 54));
		$var($Color, var$1, $UIManager::getColor("ToolBar.highlight"_s));
		$var($Color, var$2, $UIManager::getColor("ToolBar.background"_s));
		$var($Color, var$3, $UIManager::getColor("ToolBar.darkShadow"_s));
		setBorder($$new($BevelBorder, $BevelBorder::LOWERED, var$1, var$2, var$3, $($UIManager::getColor("ToolBar.shadow"_s))));
	}
	$var($Color, bgColor, $new($Color, $nc($($UIManager::getColor("ToolBar.shadow"_s)))->getRGB()));
	setBackground(bgColor);
	$var($FileSystemView, fsv, $nc(fc)->getFileSystemView());
	$set(this, files, $nc(fsv)->getChooserShortcutPanelFiles());
	$set(this, buttons, $new($JToggleButtonArray, $nc(this->files)->length));
	$set(this, buttonGroup, $new($ButtonGroup));
	for (int32_t i = 0; i < $nc(this->files)->length; ++i) {
		if (fsv->isFileSystemRoot($nc(this->files)->get(i))) {
			$nc(this->files)->set(i, $(fsv->createFileObject($($nc($nc(this->files)->get(i))->getAbsolutePath()))));
		}
		$var($String, folderName, fsv->getSystemDisplayName($nc(this->files)->get(i)));
		$init($File);
		int32_t index = $nc(folderName)->lastIndexOf((int32_t)$File::separatorChar);
		if (index >= 0 && index < folderName->length() - 1) {
			$assign(folderName, folderName->substring(index + 1));
		}
		$var($Icon, icon, nullptr);
		if ($instanceOf($ShellFolder, $nc(this->files)->get(i))) {
			$var($ShellFolder, sf, $cast($ShellFolder, $nc(this->files)->get(i)));
			$var($Image, image, $nc(sf)->getIcon(true));
			if (image == nullptr) {
				$assign(image, $cast($Image, $ShellFolder::get("shell32LargeIcon 1"_s)));
			}
			$assign(icon, image == nullptr ? ($Icon*)nullptr : static_cast<$Icon*>($new($ImageIcon, image, $(sf->getFolderType()))));
		} else {
			$assign(icon, fsv->getSystemIcon($nc(this->files)->get(i)));
		}
		$nc(this->buttons)->set(i, $$new($JToggleButton, folderName, icon));
		if (isXPStyle) {
			$nc($nc(this->buttons)->get(i))->putClientProperty("XPStyle.subAppName"_s, "placesbar"_s);
		} else {
			$var($Color, fgColor, $new($Color, $nc($($UIManager::getColor("List.selectionForeground"_s)))->getRGB()));
			$nc($nc(this->buttons)->get(i))->setContentAreaFilled(false);
			$nc($nc(this->buttons)->get(i))->setForeground(fgColor);
		}
		$nc($nc(this->buttons)->get(i))->setMargin($$new($Insets, 3, 2, 1, 2));
		$nc($nc(this->buttons)->get(i))->setFocusPainted(false);
		$nc($nc(this->buttons)->get(i))->setIconTextGap(0);
		$nc($nc(this->buttons)->get(i))->setHorizontalTextPosition($JToggleButton::CENTER);
		$nc($nc(this->buttons)->get(i))->setVerticalTextPosition($JToggleButton::BOTTOM);
		$init($JComponent);
		$nc($nc(this->buttons)->get(i))->setAlignmentX($JComponent::CENTER_ALIGNMENT);
		$nc($nc(this->buttons)->get(i))->setPreferredSize(this->buttonSize);
		$nc($nc(this->buttons)->get(i))->setMaximumSize(this->buttonSize);
		$nc($nc(this->buttons)->get(i))->addActionListener(this);
		add(static_cast<$Component*>($nc(this->buttons)->get(i)));
		if (i < $nc(this->files)->length - 1 && isXPStyle) {
			add($($Box::createRigidArea($$new($Dimension, 1, 1))));
		}
		$nc(this->buttonGroup)->add($nc(this->buttons)->get(i));
	}
	doDirectoryChanged($(fc->getCurrentDirectory()));
}

void WindowsPlacesBar::doDirectoryChanged($File* f) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->buttons)->length; ++i) {
		$var($JToggleButton, b, $nc(this->buttons)->get(i));
		if ($nc($nc(this->files)->get(i))->equals(f)) {
			$nc(b)->setSelected(true);
			break;
		} else if ($nc(b)->isSelected()) {
			$nc(this->buttonGroup)->remove(b);
			b->setSelected(false);
			$nc(this->buttonGroup)->add(b);
		}
	}
}

void WindowsPlacesBar::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, prop, $nc(e)->getPropertyName());
	$init($JFileChooser);
	if (prop == $JFileChooser::DIRECTORY_CHANGED_PROPERTY) {
		doDirectoryChanged($($nc(this->fc)->getCurrentDirectory()));
	}
}

void WindowsPlacesBar::actionPerformed($ActionEvent* e) {
	$var($JToggleButton, b, $cast($JToggleButton, $nc(e)->getSource()));
	for (int32_t i = 0; i < $nc(this->buttons)->length; ++i) {
		if (b == $nc(this->buttons)->get(i)) {
			$nc(this->fc)->setCurrentDirectory($nc(this->files)->get(i));
			break;
		}
	}
}

$Dimension* WindowsPlacesBar::getPreferredSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, min, $JToolBar::getMinimumSize());
	$var($Dimension, pref, $JToolBar::getPreferredSize());
	int32_t h = $nc(min)->height;
	if (this->buttons != nullptr && $nc(this->buttons)->length > 0 && $nc(this->buttons)->length < 5) {
		$var($JToggleButton, b, $nc(this->buttons)->get(0));
		if (b != nullptr) {
			int32_t bh = 5 * ($nc($(b->getPreferredSize()))->height + 1);
			if (bh > h) {
				h = bh;
			}
		}
	}
	if (h > $nc(pref)->height) {
		$assign(pref, $new($Dimension, pref->width, h));
	}
	return pref;
}

WindowsPlacesBar::WindowsPlacesBar() {
}

$Class* WindowsPlacesBar::load$($String* name, bool initialize) {
	$loadClass(WindowsPlacesBar, name, initialize, &_WindowsPlacesBar_ClassInfo_, allocate$WindowsPlacesBar);
	return class$;
}

$Class* WindowsPlacesBar::class$ = nullptr;

	} // swing
} // sun