#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$SelectionListener.h>

#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/io/File.h>
#include <java/util/ArrayList.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JList.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

#undef DIRECTORIES_ONLY
#undef FILES_ONLY

using $FileArray = $Array<::java::io::File>;
using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $EventObject = ::java::util::EventObject;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JList = ::javax::swing::JList;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKFileChooserUI$SelectionListener_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$SelectionListener, this$0)},
	{}
};

$MethodInfo _GTKFileChooserUI$SelectionListener_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(GTKFileChooserUI$SelectionListener::*)($GTKFileChooserUI*)>(&GTKFileChooserUI$SelectionListener::init$))},
	{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKFileChooserUI$SelectionListener_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$SelectionListener", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "SelectionListener", $PROTECTED},
	{}
};

$ClassInfo _GTKFileChooserUI$SelectionListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$SelectionListener",
	"java.lang.Object",
	"javax.swing.event.ListSelectionListener",
	_GTKFileChooserUI$SelectionListener_FieldInfo_,
	_GTKFileChooserUI$SelectionListener_MethodInfo_,
	nullptr,
	nullptr,
	_GTKFileChooserUI$SelectionListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
};

$Object* allocate$GTKFileChooserUI$SelectionListener($Class* clazz) {
	return $of($alloc(GTKFileChooserUI$SelectionListener));
}

void GTKFileChooserUI$SelectionListener::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void GTKFileChooserUI$SelectionListener::valueChanged($ListSelectionEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(e)->getValueIsAdjusting()) {
		$var($JFileChooser, chooser, this->this$0->getFileChooser());
		$var($JList, list, $cast($JList, e->getSource()));
		if ($nc(chooser)->isMultiSelectionEnabled()) {
			$var($FileArray, files, nullptr);
			$var($ObjectArray, objects, $nc(list)->getSelectedValues());
			if (objects != nullptr) {
				bool var$1 = objects->length == 1 && $nc(($cast($File, objects->get(0))))->isDirectory();
				bool var$0 = var$1 && chooser->isTraversable(($cast($File, objects->get(0))));
				if (var$0) {
					bool var$2 = chooser->getFileSelectionMode() != $JFileChooser::DIRECTORIES_ONLY;
					var$0 = (var$2 || !$nc($(chooser->getFileSystemView()))->isFileSystem(($cast($File, objects->get(0)))));
				}
				if (var$0) {
					$GTKFileChooserUI::access$200(this->this$0, true);
					$GTKFileChooserUI::access$300(this->this$0, ($cast($File, objects->get(0))));
				} else {
					$var($ArrayList, fList, $new($ArrayList, objects->length));
					{
						$var($ObjectArray, arr$, objects);
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($Object0, object, arr$->get(i$));
							{
								$var($File, f, $cast($File, object));
								bool var$4 = chooser->isFileSelectionEnabled();
								bool var$3 = (var$4 && $nc(f)->isFile());
								if (!var$3) {
									bool var$5 = chooser->isDirectorySelectionEnabled();
									var$3 = (var$5 && $nc(f)->isDirectory());
								}
								if (var$3) {
									fList->add(f);
								}
							}
						}
					}
					if (fList->size() > 0) {
						$assign(files, $fcast($FileArray, fList->toArray($$new($FileArray, fList->size()))));
					}
					$GTKFileChooserUI::access$400(this->this$0, false);
				}
			}
			chooser->setSelectedFiles(files);
		} else {
			$var($File, file, $cast($File, $nc(list)->getSelectedValue()));
			bool var$7 = file != nullptr && file->isDirectory();
			bool var$6 = var$7 && chooser->isTraversable(file);
			if (var$6) {
				bool var$8 = chooser->getFileSelectionMode() == $JFileChooser::FILES_ONLY;
				var$6 = (var$8 || !$nc($(chooser->getFileSystemView()))->isFileSystem(file));
			}
			if (var$6) {
				$GTKFileChooserUI::access$500(this->this$0, true);
				$GTKFileChooserUI::access$600(this->this$0, file);
			} else {
				$GTKFileChooserUI::access$700(this->this$0, false);
				if (file != nullptr) {
					chooser->setSelectedFile(file);
				}
			}
		}
	}
}

GTKFileChooserUI$SelectionListener::GTKFileChooserUI$SelectionListener() {
}

$Class* GTKFileChooserUI$SelectionListener::load$($String* name, bool initialize) {
	$loadClass(GTKFileChooserUI$SelectionListener, name, initialize, &_GTKFileChooserUI$SelectionListener_ClassInfo_, allocate$GTKFileChooserUI$SelectionListener);
	return class$;
}

$Class* GTKFileChooserUI$SelectionListener::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com