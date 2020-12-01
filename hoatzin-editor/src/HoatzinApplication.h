//
// Created by christian on 21/10/2020.
//
#pragma once

#include <scene/Scene.h>
#include "application/Application.h"

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
namespace stinky {
    class ArcballCameraController;
    class GraphicLayerAbstractionFactory;
    class Window;
}

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
namespace stinky {

    /////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////
    namespace hoatzin{
        class HoatzinApplication : public Application {
        public:
            HoatzinApplication();

            void RegisterEventHandlers() override;

            void Init() override;

            Window* GetWindow() override;
        private:
            Scope<ArcballCameraController> m_CameraController;
            Scope<GraphicLayerAbstractionFactory> m_GLAFactory;
            Scope<Window> m_Window;
        };

    }

    /////////////////////////////////////////////////////////////////////////////////////////
    Application *CreateApplication();
}