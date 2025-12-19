import { defineConfig } from 'vite'

export default defineConfig({
  base: '/langjam/',
  publicDir: 'public',
  build: {
    outDir: 'dist',
    sourcemap: true
  },
  server: {
    port: 3000
  }
})

