import React from 'react';
import { View, Text, StyleSheet, Image, TouchableOpacity } from "react-native";

const MusicPlayer = () => {
  return (
    <View style={styles.container}>
        <Image 
          source={{ uri: "../assets/covers/guilty-gear-cover.jpg" }}
          style={{ width: 300, height: 300, borderRadius: 10, marginBottom: 25 }}
        />
        <View style={styles.line}></View>
        <View style={styles.mediaController}>
          <TouchableOpacity style={styles.button}>
            <Image 
              source={{ uri: "../assets/icons/back-arrow.png" }}
              style={styles.buttonImage}
            />
          </TouchableOpacity>
          <TouchableOpacity style={styles.button}>
            <Image 
              source={{ uri: "../assets/icons/play-buttton.png" }}
              style={styles.buttonImage}
            />
          </TouchableOpacity>
          <TouchableOpacity style={styles.button}>
            <Image 
              source={{ uri: "../assets/icons/right-arrow.png" }}
              style={styles.buttonImage}
            />
          </TouchableOpacity>
        </View>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#FEFAF6',
    alignItems: 'center',
    justifyContent: 'center',
  },
  mediaController: {
    flexDirection: "row",
  },
  button: {
    backgroundColor: "#EADBC8",
    borderRadius: 100,
    marginRight: 20,
    padding: 15,
  },
  buttonImage: {
    width: 50,
    height: 50,
  },
  line: {
    backgroundColor: "#595959",
    borderRadius: 15,
    height: 5,
    width: "75%",
    marginBottom: 25,
  }
});

export default MusicPlayer;
