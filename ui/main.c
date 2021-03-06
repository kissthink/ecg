/* main.c generated by valac 0.21.1, the Vala compiler
 * generated from main.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_APP (app_get_type ())
#define APP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_APP, App))
#define APP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_APP, AppClass))
#define IS_APP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_APP))
#define IS_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_APP))
#define APP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_APP, AppClass))

typedef struct _App App;
typedef struct _AppClass AppClass;
typedef struct _AppPrivate AppPrivate;

#define TYPE_MAIN_WINDOW (main_window_get_type ())
#define MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MAIN_WINDOW, MainWindow))
#define MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MAIN_WINDOW, MainWindowClass))
#define IS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MAIN_WINDOW))
#define IS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MAIN_WINDOW))
#define MAIN_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MAIN_WINDOW, MainWindowClass))

typedef struct _MainWindow MainWindow;
typedef struct _MainWindowClass MainWindowClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _App {
	GtkApplication parent_instance;
	AppPrivate * priv;
};

struct _AppClass {
	GtkApplicationClass parent_class;
};


static gpointer app_parent_class = NULL;

GType app_get_type (void) G_GNUC_CONST;
enum  {
	APP_DUMMY_PROPERTY
};
App* app_new (void);
App* app_construct (GType object_type);
static void app_real_activate (GApplication* base);
MainWindow* main_window_new (GtkApplication* application);
MainWindow* main_window_construct (GType object_type, GtkApplication* application);
GType main_window_get_type (void) G_GNUC_CONST;
gint app_main (gchar** args, int args_length1);


App* app_construct (GType object_type) {
	App * self = NULL;
	self = (App*) g_object_new (object_type, "application-id", "org.gnome.ecg-viewer", "flags", G_APPLICATION_FLAGS_NONE, NULL);
	return self;
}


App* app_new (void) {
	return app_construct (TYPE_APP);
}


static void app_real_activate (GApplication* base) {
	App * self;
	GtkWindow* window = NULL;
	MainWindow* _tmp0_ = NULL;
	self = (App*) base;
	_tmp0_ = main_window_new ((GtkApplication*) self);
	g_object_ref_sink (_tmp0_);
	window = (GtkWindow*) _tmp0_;
	gtk_widget_show_all ((GtkWidget*) window);
	gtk_application_add_window ((GtkApplication*) self, window);
	_g_object_unref0 (window);
}


gint app_main (gchar** args, int args_length1) {
	gint result = 0;
	App* app = NULL;
	App* _tmp0_ = NULL;
	gchar** _tmp1_ = NULL;
	gint _tmp1__length1 = 0;
	gint _tmp2_ = 0;
	_tmp0_ = app_new ();
	app = _tmp0_;
	_tmp1_ = args;
	_tmp1__length1 = args_length1;
	_tmp2_ = g_application_run ((GApplication*) app, _tmp1__length1, _tmp1_);
	result = _tmp2_;
	_g_object_unref0 (app);
	return result;
}


int main (int argc, char ** argv) {
	g_type_init ();
	return app_main (argv, argc);
}


static void app_class_init (AppClass * klass) {
	app_parent_class = g_type_class_peek_parent (klass);
	G_APPLICATION_CLASS (klass)->activate = app_real_activate;
}


static void app_instance_init (App * self) {
}


GType app_get_type (void) {
	static volatile gsize app_type_id__volatile = 0;
	if (g_once_init_enter (&app_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (AppClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) app_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (App), 0, (GInstanceInitFunc) app_instance_init, NULL };
		GType app_type_id;
		app_type_id = g_type_register_static (GTK_TYPE_APPLICATION, "App", &g_define_type_info, 0);
		g_once_init_leave (&app_type_id__volatile, app_type_id);
	}
	return app_type_id__volatile;
}



