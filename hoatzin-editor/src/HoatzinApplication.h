//
// Created by christian on 21/10/2020.
//
#pragma once

#include <scene/Scene.h>
#include "application/Application.h"

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
namespace stinky {
    class PerspectiveCameraController;
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

            void RegisterEvents() override;

            void Init() override;

            Window* GetWindow() override;
        private:
            Scope<PerspectiveCameraController> m_CameraController;
            Scope<GraphicLayerAbstractionFactory> m_GLAFactory;
            Scope<Window> m_Window;
        };

    }

    /////////////////////////////////////////////////////////////////////////////////////////
    Application *CreateApplication();
}