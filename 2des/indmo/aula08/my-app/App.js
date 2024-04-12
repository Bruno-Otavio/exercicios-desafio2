import React from 'react';
import { NavigationContainer } from '@react-navigation/native';
import { createMaterialBottomTabNavigator } from '@react-navigation/material-bottom-tabs';
import { Ionicons } from '@expo/vector-icons';

import Home from './screens/Home';
import Portfolio from './screens/Portfolio';
import Contato from './screens/Contato';

const Tab = createMaterialBottomTabNavigator();

export default function App() {
  return (
    <NavigationContainer>
      <Tab.Navigator
        initialRouteName='Home'
        activeColor='#F6B17A'
        inactiveColor='#D8DEE9'
        barStyle={{backgroundColor: "#2D3250"}}
      >
        <Tab.Screen
          name='Home'
          component={Home}
          options={{
            tabBarLabel: "Home",
            tabBarIcon: ({ color }) => {
              <Ionicons name="home" color={color} size={26} />
            }
          }}
        />

        <Tab.Screen
          name='Portfolio'
          component={Portfolio}
          options={{
            tabBarLabel: "Portfolio",
            tabBarIcon: ({ color }) => {
              <Ionicons name="search" color={color} size={26} />
            }
          }}
        />

        <Tab.Screen
          name='About'
          component={Contato}
          options={{
            tabBarLabel: "Contato",
            tabBarIcon: ({ color }) => {
              <Ionicons name="information-circle" color={color} size={26} />
            }
          }}
        />
      </Tab.Navigator>
    </NavigationContainer>
  );
}
