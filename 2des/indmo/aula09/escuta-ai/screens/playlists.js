import React from 'react';
import { View, Text, StyleSheet, Image } from "react-native";

const PlayLists = () => {
  return (
    <View style={styles.container}>
      <View style={styles.card}>
        <Image
            source={{ uri: "../assets/covers/guilty-gear-cover.jpg" }}
            style={styles.image}
        />
        <View>
          <Text style={styles.title}>Guilty Gear</Text>
          <Text style={styles.author}>Bruno</Text>
        </View>
      </View>


      <View style={styles.card}>
        <Image
            source={{ uri: "../assets/covers/icdd.jpg" }}
            style={styles.image}
        />
        <View>
          <Text style={styles.title}>Nessa eu infarto</Text>
          <Text style={styles.author}>Bruno</Text>
        </View>
      </View>

      <View style={styles.card}>
        <Image
            source={{ uri: "../assets/covers/pericles.jpg" }}
            style={styles.image}
        />
        <View>
          <Text style={styles.title}>Churras</Text>
          <Text style={styles.author}>Bruno</Text>
        </View>
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
  image: {
    width: 200,
    height: 200,
  },
  title: {
    fontSize: 25,
    fontWeight: 500,
    color: "#102C57",
  },
  author: {
    fontSize: 20,
    fontWeight: 350,
    color: "#595959"
  },
  card: {
    marginBottom: 15
  }
});

export default PlayLists;

